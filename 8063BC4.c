int __fastcall GetLedgeJumpDirection(__int16 a1, __int16 a2, unsigned __int8 a3)
{
  int v3; // r4@1
  int v4; // r4@4
  unsigned __int8 v5; // r0@4
  int result; // r0@5

  v3 = a3;
  if ( !a3 )
    goto LABEL_9;
  if ( a3 > 4u )
    v3 = (a3 - 4) & 0xFF;
  v4 = (v3 - 1) & 0xFF;
  v5 = MapGridGetMetatileBehaviorAt(a1, a2);
  if ( (unsigned __int8)call_via_r1(v5, *(&gUnknown_08376040 + v4)) == 1 )
    result = (v4 + 1) & 0xFF;
  else
LABEL_9:
    result = 0;
  return result;
}
