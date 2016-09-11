int __fastcall sub_80F3294(char a1)
{
  int v2; // [sp+Ch] [bp-4h]@0

  *(_BYTE *)(v20087CC + 62) = *(_BYTE *)(v20087CC + 62) & 0xFB | 4 * (a1 & 1);
  if ( v20087C9 )
  {
    if ( a1 == 1 )
    {
      *(_BYTE *)(v20087D0 + 62) = *(_BYTE *)(v20087D0 + 62) & 0xFB | 4;
      *(_BYTE *)(v20087D4 + 62) = *(_BYTE *)(v20087D4 + 62) & 0xFB | 4;
    }
    else
    {
      *(_WORD *)(v20087D0 + 54) = 1;
      *(_WORD *)(v20087D4 + 54) = 1;
    }
  }
  return v2;
}
