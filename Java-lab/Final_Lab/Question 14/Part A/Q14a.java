import java.applet.Applet;
import java.awt.Graphics;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.awt.event.MouseMotionListener;

public class Q14a extends Applet implements MouseMotionListener,MouseListener {

	private static final long serialVersionUID = 1L;

	int startx, starty, x, y, height, width;

	public void init() {
		addMouseListener(this);
		addMouseMotionListener(this);
	}

	@Override
	public void mouseDragged(MouseEvent e) {

		x=startx;
		y=starty;
		width=e.getX()-startx;
		height=e.getY()-starty;

		if(width<0)
		{
			x=e.getX();
			width=Math.abs(width);
		}
		if(height<0)
		{
			y=e.getY();
			height=Math.abs(height);
		}
		repaint();
	}

	@Override
	public void mousePressed(MouseEvent e) {
		startx=e.getX();
		starty=e.getY();
		showStatus("mouse pressed");
	}

	public void paint(Graphics g) {	
		g.drawRect(x,y,width,height);
	}
	
	@Override
	public void mouseMoved(MouseEvent e) {
	}

	@Override
	public void mouseClicked(MouseEvent e) {
	}

	@Override
	public void mouseEntered(MouseEvent e) {
	}

	@Override
	public void mouseExited(MouseEvent e) {
	}

	@Override
	public void mouseReleased(MouseEvent e) {
	}
}