package com.Datastructure;

public class InsertStart {

	Node head;

	// node of singly link list
	static class Node{
		int data;
		Node next;

		Node(int d){
			data = d;
			next = null;
		}
	}

	public void printList(){
		Node n = head;
		while (n != null){
			System.out.println(n.data);
			n = n.next;
		}
	}

	public void insertFirst(int value){
		Node newNode = new Node(value);
		newNode.next = head;
		head = newNode;
	}

	public void insertLast(int value) {
	}

	public static void main(String[] args) {
		InsertStart list = new InsertStart();
		list.head = new Node(1);
		Node second = new Node(2);
		Node third = new Node(3);

		list.head.next = second;
		second.next = third;

		list.insertFirst(8);
		list.printList();
	}

}
