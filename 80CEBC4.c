int __fastcall sub_80CEBC4(__int16 a1, int a2, _WORD *a3, _WORD *a4, unsigned __int8 a5)
{
  int v5; // r6@1
  int v6; // r4@3
  int v8; // [sp+14h] [bp-4h]@0

  v5 = (unsigned __int16)a2;
  LOBYTE(a2) = a5;
  if ( a1 < 0 )
    a2 = 255 * a5 & 0xFF;
  v6 = (a1 << 8) / (char)a2;
  if ( !v6 )
    v6 = 1;
  *a3 = (a1 << 8) / v6;
  *a4 = (v5 << 16 >> 8) / v6;
  return v8;
}
