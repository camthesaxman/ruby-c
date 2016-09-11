int __fastcall CreateNameMenu(int a1, int a2)
{
  char v2; // r5@1
  char v3; // r4@1
  unsigned __int8 v4; // r5@2
  unsigned __int8 v5; // r4@2
  int v7; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  MenuDrawTextWindow(
    (unsigned __int8)a1,
    (unsigned __int8)a2,
    (unsigned int)((a1 << 24) + 167772160) >> 24,
    (unsigned int)((a2 << 24) + 184549376) >> 24);
  if ( v2024EAC )
  {
    v4 = v2 + 1;
    v5 = v3 + 1;
    PrintMenuItems(v4, v5, 5, " ß@\b");
  }
  else
  {
    v4 = v2 + 1;
    v5 = v3 + 1;
    PrintMenuItems(v4, v5, 5, " ß@\b");
  }
  InitMenu(0, v4, v5, 5);
  return v7;
}
