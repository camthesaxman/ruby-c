int __fastcall SkipExtCtrlCode(int a1)
{
  int i; // r4@1

  for ( i = a1; *(_BYTE *)i == 252; i += 1 + (unsigned __int8)GetExtCtrlCodeLength(*(_BYTE *)(i + 1)) )
    ;
  return i;
}
