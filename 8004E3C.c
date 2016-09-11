int __fastcall sub_8004E3C(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v5; // [sp+Ch] [bp-4h]@0

  v3 = a2;
  dword_3000354 = a1;
  InitWindow((int)&sTempWindow, a3, 0, 0, 0);
  dword_300034C = v3;
  sub_8002F44((int)&sTempWindow);
  return v5;
}
