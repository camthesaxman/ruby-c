int sub_8042824()
{
  char v1; // [sp+8h] [bp-6Ch]@1
  int v2; // [sp+70h] [bp-4h]@1

  MenuDrawTextWindow(15, 6, 29, 13);
  sub_8042630(33720016, &v1);
  MenuPrint(&v1, 16, 7);
  sub_80426B0(33720016, &v1);
  sub_80729D8(&v1, 206, 56, 1);
  InitMenu(0, 16, 7, 3);
  CreateTask(sub_804272C, 3);
  return v2;
}
