int __fastcall CreateGenderMenu(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r4@1
  int v7; // [sp+10h] [bp-4h]@0

  v2 = (unsigned __int8)a1;
  v3 = (unsigned __int8)a2;
  MenuDrawTextWindow(
    (unsigned __int8)a1,
    (unsigned __int8)a2,
    (unsigned int)((a1 << 24) + 100663296) >> 24,
    (unsigned int)((a2 << 24) + 83886080) >> 24);
  v4 = (v2 + 1) & 0xFF;
  v5 = (v3 + 1) & 0xFF;
  PrintMenuItems(v4, v5, 2, "—ß@\b");
  InitMenu(0, v4, v5, 2);
  return v7;
}
