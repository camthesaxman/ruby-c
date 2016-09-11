signed int __fastcall sub_8002F44(int a1)
{
  int i; // r4@1
  unsigned __int16 v2; // r1@7
  int v3; // r0@7
  int v4; // r0@9

  for ( i = a1; ; InterpretText(i) )
  {
    v4 = *(_WORD *)(i + 22);
    if ( !*(_WORD *)(i + 22) )
      break;
    if ( v4 == 6 )
    {
      AddToCursorY(i, 16);
      *(_BYTE *)(i + 16) = 0;
      if ( *(_BYTE *)(i + 15) )
        ClipLeft(i);
      *(_WORD *)(i + 22) = 2;
    }
    else if ( v4 == 7 )
    {
      v2 = *(_WORD *)(i + 30);
      *(_WORD *)(i + 30) = v2 + 1;
      v3 = GetExpandedPlaceholder(*(_BYTE *)(*(_DWORD *)(i + 32) + v2));
      sub_8002FA0(i, v3);
    }
  }
  return 1;
}
