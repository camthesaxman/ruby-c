int __fastcall sub_8122A48(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r4@2
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v2 = &dword_3004B20[10 * a1];
    *((_WORD *)v2 + 4) = 30;
    sub_806D4AC(a1, v2023A00, 0);
    sub_806D4AC(v1, v2023A20, 1);
    sub_806D4AC(v1, v2023A40, 2);
    *v2 = (int)sub_8122AB8;
    v201B261 = 1;
  }
  return v4;
}
