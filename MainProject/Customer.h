/*****************************************************************//**
 * @file   Customer.h
 * @brief  Customer structure and functions signature
 *
 * @author Francisco
 * @date   March 2023
 *********************************************************************/

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

	#define NAME_SIZE 40
	#define NIF_SIZE 15
	#define ADRESS_SIZE 80

	typedef struct Customer Customer;
	struct Customer {
		int id;
		char name[NAME_SIZE], nif[NIF_SIZE], adress[ADRESS_SIZE];
		float balance;
		Customer* next;
	};

	/**
	 * Appends a new Customer to the linked list.
	 *
	 * @param List Head
	 * @param Customer to insert
	 * @return true - Added Successfully
	 * @return false - Error allocating memory
	 */
	bool AddCustomer(Customer** head, Customer sourceCustomer);

	/**
	 * Finds the Customer in a linked list by its index.
	 *
	 * @param List head
	 * @param Customer index
	 * @return Customer with the specified index
	 */
	Customer FindCustomer(Customer* head, int index);

#endif