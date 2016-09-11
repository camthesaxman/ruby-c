int __fastcall sub_811A15C(unsigned __int8 a1)
{
  unsigned int v1; // r1@1
  int v3; // [sp+Ch] [bp-4h]@0

  sub_811A350(a1, v201C011, 0);
  v201C011 += 2;
  v1 = 0;
  do
  {
    v40000D4 = &gUnknown_083FB718;
    v40000D8 = 32
             * (32 * v1
              + ((((unsigned int)v201C011 >> 3)
                + v201C016
                + 1
                - 32 * ((signed int)(((unsigned int)v201C011 >> 3) + v201C016 + 1) >> 5)) & 0xFFFF))
             + 0x2000000;
    v40000DC = -2147483632;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 6 );
  return v3;
}
