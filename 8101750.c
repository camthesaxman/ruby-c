int __fastcall unref_sub_8101750(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_81341D4() << 24 )
  {
    HIWORD(dword_3004B20[10 * v1 + 7]) = 2;
    v20388F6 = 0;
    sub_80FE5AC(v1);
  }
  else
  {
    DisplayItemMessageOnField(v1, (int)"ÎÜÙæÙ", (int)sub_80FE428, 0);
  }
  return v3;
}
