signed int __fastcall AddSpriteToOamBuffer(int a1, _BYTE *a2)
{
  _BYTE *v2; // r3@1
  signed int result; // r0@2
  int *v4; // r2@5
  int v5; // r1@5

  v2 = a2;
  if ( *a2 < (unsigned int)(unsigned __int8)gOamLimit )
  {
    if ( *(_DWORD *)(a1 + 24) && *(_BYTE *)(a1 + 66) & 0xC0 )
    {
      result = (unsigned __int8)AddSubspritesToOamBuffer(a1, &dword_30017AC[2 * *a2], a2);
    }
    else
    {
      v4 = &gMain[2 * *a2];
      v5 = *(_DWORD *)(a1 + 4);
      v4[15] = *(_DWORD *)a1;
      v4[16] = v5;
      ++*v2;
      result = 0;
    }
  }
  else
  {
    result = 1;
  }
  return result;
}
