signed int __fastcall sub_8084004(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  unsigned int v3; // r7@1
  int v4; // r6@1
  int *v5; // r5@2
  int v6; // r4@2
  signed int result; // r0@3

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  v4 = GetFieldObjectScriptPointerByFieldObjectId(BYTE3(v1));
  if ( !GetTrainerFlagFromScriptPointer(v4)
    && (v5 = &dword_30048A0[9 * v2], (v6 = CheckIfTrainerCanApproachPlayer(v5) & 0xFF) != 0) )
  {
    SingleTrainerWantsBattle(v3, v4);
    sub_80842C8(v5, (v6 - 1) & 0xFF);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
