int __fastcall DestroyTask(unsigned __int8 a1)
{
  int *v1; // r2@1
  int v2; // r0@3
  int v4; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( *((_BYTE *)v1 + 4) )
  {
    *((_BYTE *)v1 + 4) = 0;
    if ( *((_BYTE *)v1 + 5) == 254 )
    {
      v2 = *((_BYTE *)v1 + 6);
      if ( v2 != 255 )
        BYTE1(dword_3004B20[10 * v2 + 1]) = -2;
    }
    else if ( *((_BYTE *)v1 + 6) == 255 )
    {
      BYTE2(dword_3004B20[10 * *((_BYTE *)v1 + 5) + 1]) = -1;
    }
    else
    {
      BYTE2(dword_3004B20[10 * *((_BYTE *)v1 + 5) + 1]) = *((_BYTE *)v1 + 6);
      BYTE1(dword_3004B20[10 * *((_BYTE *)v1 + 6) + 1]) = *((_BYTE *)v1 + 5);
    }
  }
  return v4;
}
