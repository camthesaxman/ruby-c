int __fastcall sub_80954DC(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = (unsigned __int8)sub_806CA38(BYTE3(v1));
  if ( !(v202F38F & 0x80) )
  {
    DestroyTask(v2);
    v201B262 = 1;
    sub_809D8BC(dword_3004360, v3, ((unsigned __int8)byte_3004350 - 1) & 0xFF, sub_809535C);
  }
  return v5;
}
