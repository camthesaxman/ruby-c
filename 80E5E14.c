_BOOL4 __fastcall IsRunningDisallowedByMetatile(char a1)
{
  char v1; // r4@1

  v1 = a1;
  return MetatileBehavior_IsRunningDisallowed((unsigned __int8)a1) << 24
      || MetatileBehavior_IsFortreeBridge(v1) << 24 && !(PlayerGetZCoord() & 1);
}
