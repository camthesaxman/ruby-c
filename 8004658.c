int __fastcall TryEraseDownArrow(int a1)
{
  _BYTE *v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = (_BYTE *)a1;
  *(_WORD *)(a1 + 24) = 0;
  if ( (unsigned __int8)PlayerCanInterruptWait() == 1 )
    EraseAtCursor(v1);
  return v3;
}
