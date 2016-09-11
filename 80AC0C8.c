int __fastcall sub_80AC0C8(unsigned __int8 a1)
{
  int v1; // r5@1
  __int16 v2; // r0@2
  unsigned __int8 v3; // r0@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( v203869A & 1 )
  {
    v2 = sub_80AF15C(v2038695);
    *(_WORD *)(28 * v2038695 + 0x2019266) = v2;
    v3 = CreateTask((int)sub_80C8A38, 0);
    SetTaskFuncWithFollowupFunc(v3, (int)sub_80C8A38, (int)sub_80AC15C);
    dword_3004B20[10 * v1] = (int)nullsub_89;
    sub_80AF860();
    sub_80AFFE0(0);
  }
  else
  {
    sub_80AF1B8();
    dword_3004B20[10 * v1] = (int)sub_80AC188;
  }
  return v5;
}
