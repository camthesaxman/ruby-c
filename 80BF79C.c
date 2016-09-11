int __fastcall sub_80BF79C(int a1)
{
  int v1; // r4@1
  unsigned int i; // r2@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  for ( i = (unsigned __int16)Random() % 6u & 0xFF; ; i = (i + 1) & 0xFF )
  {
    if ( i == 6 )
      i = 0;
    if ( *(_WORD *)(v1 + 4 + 2 * i) != 0xFFFF )
      break;
  }
  sub_80EB3FC(&gStringVar3, *(_WORD *)(v1 + 4 + 2 * i));
  return v4;
}
