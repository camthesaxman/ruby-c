int __fastcall sub_8082FEC(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  int *v3; // r1@5
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  if ( sub_8082E28(BYTE3(v1)) != 1
    && sub_8082EB8(v2) != 1
    && sub_8082DF4(v2) != 1
    && !(unsigned __int8)textbox_any_visible() )
  {
    v3 = &dword_3004B20[10 * v2];
    *((_WORD *)v3 + 7) = 0;
    *v3 = (int)sub_808303C;
  }
  return v5;
}
