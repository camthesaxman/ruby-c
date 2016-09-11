int __fastcall FieldObjectTurnByLocalIdAndMap(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  unsigned __int8 v4; // r4@1
  unsigned __int8 v6; // [sp+0h] [bp-Ch]@1
  int v7; // [sp+8h] [bp-4h]@3

  v4 = a4;
  if ( !(TryGetFieldObjectIdByLocalIdAndMap(a1, a2, a3, &v6) << 24) )
    FieldObjectTurn((int)&dword_30048A0[9 * v6], v4);
  return v7;
}
