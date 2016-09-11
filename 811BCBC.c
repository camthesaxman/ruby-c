int __fastcall sub_811BCBC(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  while ( call_via_r1(v1, *(&gUnknown_083FD814 + *((_WORD *)v1 + 4))) << 24 )
    ;
  return v3;
}
