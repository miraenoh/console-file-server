/** @file constants.h
	@brief A file containing universal constants for the app */
#pragma once
#include "stdafx.h"

const string ADMIN_CODE_INITIAL = "admin";

const int CAPACITY_BASE = 10;

const int ENCRYPTION_KEY = 3;

const int MENU_MAIN_LEN = 4;
const string MENU_MAIN[] = { "���α׷� ����", "����� ���", "������ ���", "ȸ������ ��û" };
const int MENU_USER_LEN = 4;
const string MENU_USER[] = { "��������", "���� ���ε�", "���� ����", "���� �ٿ�ε�" };
const int MENU_ADMIN_LEN = 8;
const string MENU_ADMIN[] = { "��������", "������ �ڵ� ����", "������ ���� ����", "�ϵ�뷮 �߰�", "������� ���� ����", "���� ���ε�", "���� ����", "���� �ٿ�ε�" };

const string MES_REQUEST_INPUT = "������ ��ȣ: ";
const string MES_RETRY = "�ٽ� �õ����ּ���.";
const string MES_ERR_INPUT = "�ùٸ��� ���� �Է��Դϴ�.";

// Auth
const string MES_AUTH_ID = "id: ";
const string MES_AUTH_PASS = "password: ";
const string MES_AUTH_IDENTN = "�ֹι�ȣ(���ڸ�): ";
const string MES_AUTH_AUTH = "���ѷ���: ";
// Auth registration
const string MES_REGISTER_SUCCESS = "ȸ������ ��û�� �Ϸ�Ǿ����ϴ�.";
const string MES_RIGISTER_ERR_ID_LEN = "���̵�� 5�� �̻�, 20�� ���Ͽ��� �մϴ�.";
const string MES_RIGISTER_ERR_ID_EXISTS = "�̹� �����ϴ� ���̵��Դϴ�.";
const string MES_RIGISTER_ERR_PASS_LEN = "��й�ȣ�� 8�� �̻�, 20�� ���Ͽ��� �մϴ�.";
const string MES_RIGISTER_ERR_PASS_IDENTN = "��й�ȣ�� �ֹε�Ϲ�ȣ�� ������ �� �����ϴ�.";
const string MES_RIGISTER_ERR_IDNETN = "�ùٸ��� ���� �ֹε�Ϲ�ȣ�Դϴ�.";
const string MES_RIGISTER_ERR_AUTHLEVEL = "���ѷ����� R, W, RW �� �ϳ����� �մϴ�.";
// Auth admin login
const string MES_LOGIN_ADMIN_CODE = "������ �ڵ�: ";
const string MES_LOGIN_ADMIN_ERR = "������ �ڵ尡 ��ġ���� �ʽ��ϴ�.";
// Auth user login
const string MES_LOGIN_USER_ERR_ID = "�������� �ʴ� ���̵��Դϴ�.";
const string MES_LOGIN_USER_ERR_PASS = "�н����尡 ��ġ���� �ʽ��ϴ�.";

// User mode
const string MES_USER_CAP_ALL = "���� ��ü �뷮: ";
const string MES_USER_CAP_USED = "���� ��� �뷮: ";
const string MES_USER_CAP_AVIL = "��� ���� �뷮: ";
const string MES_USER_FM_FAIL_W = "���� ���� ������ �����ϴ�.";
const string MES_USER_FM_FAIL_R = "���� �б� ������ �����ϴ�.";

// Admin mode
// Approve usera
const string MES_ADMIN_PEND_DECIDE = "���� ������ 1, ������ 2, ���ư��÷��� 0�� �Է����ּ���.";
const string MES_ADMIN_PEND_SUCCESS_APPROVE = "�ش� ������ ������ ���εǾ����ϴ�.";
const string MES_ADMIN_PEND_SUCCESS_REFUSE = "�ش� ������ ������ �����Ǿ����ϴ�.";
// Change admin code
const string MES_ADMIN_CODE_INFO = "���ư���: 0";
const string MES_ADMIN_CODE_CURR = "���� ������ �ڵ�: ";
const string MES_ADMIN_CODE_NEXT = "�ٲ� ������ �ڵ�: ";
const string MES_ADMIN_CODE_SUCCESS = "������ �ڵ尡 ����Ǿ����ϴ�.";
const string MES_ADMIN_CODE_ERR_CURR = "������ �ڵ尡 ��ġ���� �ʽ��ϴ�.";
const string MES_ADMIN_CODE_ERR_NEXT = "�ڵ�� 5-20���� ���� ��ҹ��ڿ� ���ڿ��� �մϴ�.";
// Add capacity
const string MES_ADMIN_CAP_ERR = "�뷮�� 3ȸ �̻� �߰��� �����Դϴ�. �뷮 �߰��� �����߽��ϴ�.";
const string MES_ADMIN_CAP_SUCCESS = "�뷮�� �߰��Ǿ����ϴ�.";

// File manager
// File upload
const string MES_FM_UPLOAD_NAME = "���� �̸�: ";
const string MES_FM_UPLOAD_TYPE = "���� Ÿ��: ";
const string MES_FM_UPLOAD_SIZE = "���� ũ��(����): ";
const string MES_FM_UPLOAD_ERR_NAME = "���� �̸��� 5-20���� ���� ��ҹ��ڿ� ���ڿ��� �մϴ�.";
const string MES_FM_UPLOAD_ERR_TYPE = "���� Ÿ���� 3-5���� ���� �ҹ��ڿ��� �մϴ�.";
const string MES_FM_UPLOAD_ERR_SIZE = "���� ����� ������ ���� �뷮���� Ů�ϴ�.";
const string MES_FM_UPLOAD_ERR_SIZE_RANGE = "���� ������� 0���� Ŀ�� �մϴ�.";
const string MES_FM_UPLOAD_SUCCESS = "������ ���ε�Ǿ����ϴ�.";
const string MES_FM_UPLOAD_FAIL = "���� ���ε忡 �����߽��ϴ�.";
// File delete
const string MES_FM_DELETE_SUCCESS = "�����Ͻ� ������ �����Ǿ����ϴ�.";
// File download
const string MES_FM_DOWNLOAD_SUCCESS = "�����Ͻ� ������ �ٿ�ε�Ǿ����ϴ�.";
