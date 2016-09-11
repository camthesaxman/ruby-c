int __fastcall AnimCmd_loop(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( *(_BYTE *)(a1 + 45) )
    ContinueAnimLoop(a1);
  else
    BeginAnimLoop(a1);
  return v2;
}
