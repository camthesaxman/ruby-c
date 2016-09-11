int __fastcall sub_8098BF0(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r2@1
  unsigned __int16 v5; // r0@1
  int v6; // r0@1
  int v8; // [sp+14h] [bp-4h]@0

  v3 = GetMonData(33564084, 0, a3);
  v5 = GetMonData(33564084, 65, v4);
  v6 = sub_8099AFC(v5, v3, 0, 0);
  v2001034 = v6;
  *(_DWORD *)(v6 + 28) = sub_80999C4;
  return v8;
}
