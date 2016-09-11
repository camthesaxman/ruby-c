signed int __fastcall sub_80791A8(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, char a5, char a6, char a7)
{
  int v7; // r7@1
  int v8; // r8@1
  int v9; // r9@1
  signed int v10; // r4@1
  signed int v11; // r0@17

  v7 = a2;
  v8 = a3;
  v9 = a4;
  v10 = 0;
  if ( a1 << 24 )
  {
    if ( sub_8076BE0() << 24 )
      v10 = 1 << sub_80789BC();
    else
      v10 = 14;
  }
  if ( v7 )
    v10 |= 1 << (v202F7C8 + 16);
  if ( v8 )
    v10 |= 1 << (v202F7C9 + 16);
  if ( v9 && b_side_obj__get_some_boolean(v202F7C8 ^ 2) << 24 )
    v10 |= 1 << ((v202F7C8 ^ 2) + 16);
  if ( a5 && b_side_obj__get_some_boolean(v202F7C9 ^ 2) << 24 )
    v10 |= 1 << ((v202F7C9 ^ 2) + 16);
  if ( a6 )
  {
    if ( sub_8076BE0() << 24 )
      v11 = 0x4000;
    else
      v11 = 256;
    v10 |= v11;
  }
  if ( a7 && !(sub_8076BE0() << 24) )
    v10 |= 0x200u;
  return v10;
}
