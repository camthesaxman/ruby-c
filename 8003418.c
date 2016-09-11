signed int __fastcall sub_8003418(int a1)
{
  int v1; // r4@1
  signed int v2; // r5@1

  v1 = a1;
  v2 = 1;
  while ( *(_WORD *)(v1 + 22) )
  {
    if ( *(_WORD *)(v1 + 22) == 6 )
    {
      AddToCursorY(v1, 16);
      *(_BYTE *)(v1 + 16) = 0;
      if ( *(_BYTE *)(v1 + 15) )
        ClipLeft(v1);
      *(_WORD *)(v1 + 22) = 2;
    }
    if ( (unsigned __int8)InterpretText(v1) == 1 )
      return 0;
  }
  return v2;
}
