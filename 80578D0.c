_BOOL4 __fastcall MetatileBehavior_IsRunningDisallowed(int a1)
{
  a1 = (unsigned __int8)a1;
  return (unsigned __int8)a1 == 10 || a1 == 3 || a1 == 40 || MetatileBehavior_IsPacifidlogLog(a1) << 24;
}
