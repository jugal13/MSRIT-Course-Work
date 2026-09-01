#include <stdio.h>
int main()
{
	int bucket_size, outgoing_rate, input_packet_size;
	int size_remaining, packets_in_buffer = 0;
	printf("Enter the bucket size and outgoing rate");
	scanf("%d%d", &bucket_size, &outgoing_rate);
	while (1)
	{
		size_remaining = bucket_size - packets_in_buffer;
		printf("\nEnter the size of incoming packet : ");
		scanf("%d", &input_packet_size);
		if (input_packet_size <= size_remaining)
		{
			packets_in_buffer += input_packet_size;
			printf("\nCurrent buffer size :%d Bucket size :%d ", packets_in_buffer, bucket_size);
		}
		else
		{
			printf("\nBuffer full, No of packets dropped : %d ", input_packet_size - size_remaining);
			packets_in_buffer = bucket_size;
			printf("\nCurrent buffer size :%d Bucket size :%d ", packets_in_buffer, bucket_size);
		}
		if (packets_in_buffer >= outgoing_rate)
		{
			packets_in_buffer -= outgoing_rate;
			printf("Sent out a packet of size : %d, Remaining packets in buffer : %d", outgoing_rate, packets_in_buffer);
		}
	}
	return 0;
}
