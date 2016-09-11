int sub_80F49F4()
{
  signed int v0; // r5@1
  unsigned __int16 v1; // r4@3
  signed __int16 v2; // r1@7
  char v3; // r1@9
  int v5; // [sp+1Ch] [bp-4h]@0

  v200893E = v200893E & 0xC01F | 0x20;
  v0 = 1;
  if ( v2008FE4 > 1u )
  {
    do
    {
      if ( *(_BYTE *)(4 * v0 + 0x200893C) == *(_BYTE *)(4 * (v0 - 1) + 0x200893C) )
      {
        *(_WORD *)(4 * v0 + 0x200893E) = *(_WORD *)(4 * v0 + 0x200893E) & 0xC01F | 32
                                                                                 * ((unsigned __int16)(4 * *(_WORD *)(4 * (v0 - 1) + 0x200893E)) >> 15);
        v1 = v0 + 1;
      }
      else
      {
        v1 = v0 + 1;
        *(_WORD *)(4 * v0 + 0x200893E) = *(_WORD *)(4 * v0 + 0x200893E) & 0xC01F | 32 * ((v0 + 1) & 0x1FF);
      }
      v0 = v1;
    }
    while ( v1 < (unsigned int)v2008FE4 );
  }
  v200876C = 0;
  v2008770 = 0;
  v200876E = 0;
  if ( v2008FE4 > 8u )
    v2 = 7;
  else
    v2 = v2008FE4 - 1;
  v2008772 = v2;
  v2008774 = v2008FE4 - 1;
  v3 = 0;
  if ( (signed __int16)(v2008FE4 - 1) > 7 )
    v3 = 1;
  v20087C9 = v3;
  return v5;
}
