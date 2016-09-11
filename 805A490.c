signed int __fastcall fish3(int a1)
{
  int v1; // r4@1
  __int16 v2; // r1@1

  v1 = a1;
  MenuDisplayMessageBox();
  ++*(_WORD *)(v1 + 8);
  *(_WORD *)(v1 + 10) = 0;
  *(_WORD *)(v1 + 12) = 0;
  v2 = (unsigned __int16)Random() % 0xAu;
  *(_WORD *)(v1 + 14) = v2 + 1;
  if ( !*(_WORD *)(v1 + 32) )
    *(_WORD *)(v1 + 14) = v2 + 4;
  if ( (signed int)*(_WORD *)(v1 + 14) > 9 )
    *(_WORD *)(v1 + 14) = 10;
  return 1;
}
