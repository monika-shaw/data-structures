package com.Datastructure;

import java.util.Scanner;

public class InsertLast {
	Node head;

	static class Node{
		int data;
		Node next;

		Node(int d){
			data = d;
			next = null;
		}
	}

	public void insertLast(int value){
		Node lastNode = new Node(value);
		lastNode.next = null;

		if (head == null){
			head = lastNode;
			return;
		}
		Node temp = head;
		while (temp.next != null){
			temp = temp.next;
		}
		temp.next = lastNode;
	}

	public void printList(){
		Node n = head;
		while (n != null){
			System.out.println(n.data);
			n = n.next;
		}
	}
	public static void main(String[] args) {
		InsertLast list = new InsertLast();
		System.out.println("Insert the numbers");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int inp;
		for (int i = 0; i < n; i++) {
			inp = sc.nextInt();
			list.insertLast(inp);
		}

		list.printList();
	}
}
