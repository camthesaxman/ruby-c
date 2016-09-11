_BOOL4 __fastcall ShouldJumpLedge(__int16 a1, __int16 a2, unsigned __int8 a3)
{
  return GetLedgeJumpDirection(a1, a2, a3) << 24 != 0;
}
