signed int __fastcall exec_movement(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, int a4)
{
  int v4; // r4@1
  signed int result; // r0@2
  signed int v6; // r0@3
  unsigned __int8 v7; // r0@5
  unsigned __int8 v8; // [sp+0h] [bp-Ch]@1

  v4 = a4;
  if ( TryGetFieldObjectIdByLocalIdAndMap(a1, a2, a3, &v8) << 24 )
  {
    result = 1;
  }
  else
  {
    v6 = FuncIsActiveTask((int)sub_80A244C) << 24;
    if ( !v6 )
      v6 = sub_80A2198(50);
    v7 = sub_80A21E0(v6);
    result = (unsigned __int8)sub_80A21F4(v7, v8, v4);
  }
  return result;
}
