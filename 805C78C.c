int __fastcall sub_805C78C(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // [sp+0h] [bp-8h]@1
  int v5; // [sp+4h] [bp-4h]@3

  if ( !(TryGetFieldObjectIdByLocalIdAndMap(a1, a2, a3, &v4) << 24) )
    sub_805C754((int)&dword_30048A0[9 * v4]);
  return v5;
}
