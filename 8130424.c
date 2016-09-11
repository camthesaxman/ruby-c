int __fastcall sub_8130424(__int16 a1, __int16 a2, __int16 a3, __int16 a4, unsigned __int8 a5, unsigned __int8 a6, _WORD *a7, _WORD *a8)
{
  int v8; // r6@5
  int v10; // [sp+24h] [bp-4h]@0

  if ( a6 )
  {
    if ( a6 < (unsigned int)a5 )
    {
      v8 = (a5 - 1) & 0xFF;
      *a7 = ((a1 << 8) + a6 * (((a3 - a1) << 8) / v8)) >> 8;
      *a8 = ((a2 << 8) + a6 * (((a4 - a2) << 8) / v8)) >> 8;
    }
    else
    {
      *a7 = a3;
      *a8 = a4;
    }
  }
  else
  {
    *a7 = a1;
    *a8 = a2;
  }
  return v10;
}
