signed int __fastcall sub_81286C4(int a1)
{
  char *v1; // r1@3

  if ( *(_BYTE *)(a1 + 33) != 2 && *(_BYTE *)(a1 + 33) )
  {
    v1 = &gSprites[68 * *(_BYTE *)(a1 + 26)];
    if ( !*((_WORD *)v1 + 30) )
      return 0;
    *(_BYTE *)(a1 + 33) = 2;
    ++*((_WORD *)v1 + 23);
  }
  return 1;
}
