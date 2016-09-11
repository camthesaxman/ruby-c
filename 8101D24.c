int __fastcall sub_8101D24(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+10h] [bp-4h]@0

  v1 = 10 * a1;
  while ( call_via_r1(&dword_3004B20[v1], *(&gUnknown_083ECAAC + v2000000)) << 24 )
    ;
  return v3;
}
