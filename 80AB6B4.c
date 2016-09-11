int __fastcall sub_80AB6B4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r0@1
  int v3; // r1@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4) - 1;
  *((_WORD *)v2 + 4) = v3;
  if ( v3 << 16 <= 0 )
  {
    GetMultiplayerId();
    DestroyTask(v1);
    dword_3004B20[10 * v201920C] = (int)sub_80AB960;
    dword_3004818 = dword_3005D28;
  }
  return v5;
}
