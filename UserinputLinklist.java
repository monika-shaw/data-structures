package com.Datastructure;

import java.util.Scanner;

public class UserinputLinklist {
	InsertStart.Node head;
	// node of singly link list
	static class Node{
		int data;
		InsertStart.Node next;

		Node(int d){
			data = d;
			next = null;
		}
	}

	public void printList(){
		InsertStart.Node n = head;
		while (n != null){
			System.out.println(n.data);
			n = n.next;
		}
	}

	public void insertFirst(int value){
		InsertStart.Node newNode = new InsertStart.Node(value);
		newNode.next = head;
		head = newNode;
	}

	public void insertLast(int value){
		System.out.println(value);
//		InsertStart.Node newNode = new InsertStart.Node(value);
//		newNode.next = null;
//		if (head == null){
//			head = newNode;
//			return;
//		}
//
//			InsertStart.Node temp = head;
//			while (temp.next != null){
//				temp = temp.next;
//			}
//			temp.next = newNode;
	}

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		InsertStart list = new InsertStart();

//		System.out.println("how many numbers you want to add");
//		int n = sc.nextInt();
//		System.out.println("Enter numbers");

//		int input;
//		for (int i = 0; i < n; i++) {
//			input = sc.nextInt();
//			list.insertFirst(input);
//		}
		list.insertLast(21);
//		list.printList();
	}
}
