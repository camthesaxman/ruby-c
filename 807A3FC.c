int __fastcall sub_807A3FC(unsigned __int8 a1, int a2, _WORD *a3, _WORD *a4)
{
  _WORD *v4; // r9@1
  _WORD *v5; // r10@1
  unsigned __int8 v6; // r4@1
  unsigned __int8 v7; // r5@2
  unsigned __int8 v8; // r6@2
  int v9; // r8@4
  int v10; // r7@4
  unsigned __int8 v11; // r4@6
  int v12; // r5@6
  int v13; // r3@6
  signed int v14; // r1@6
  signed int v15; // r2@6
  int v17; // [sp+1Ch] [bp-4h]@0

  v4 = a3;
  v5 = a4;
  v6 = a1;
  if ( a2 << 24 )
  {
    v7 = 2;
    v8 = 3;
  }
  else
  {
    v7 = 0;
    v8 = 1;
  }
  v9 = (unsigned __int8)sub_8077ABC(a1, v7);
  v10 = (unsigned __int8)sub_8077ABC(v6, v8);
  if ( !(battle_type_is_double() << 24) || sub_8076BE0() << 24 )
  {
    v14 = v9 << 16;
    v12 = (unsigned __int16)v9;
    v13 = (unsigned __int16)v10;
    v15 = v10 << 16;
  }
  else
  {
    v11 = v6 ^ 2;
    v12 = (unsigned __int8)sub_8077ABC(v11, v7);
    v13 = (unsigned __int8)sub_8077ABC(v11, v8);
    v14 = v9 << 16;
    v15 = v10 << 16;
  }
  *v4 = ((v14 >> 16) + v12) >> 1;
  *v5 = ((v15 >> 16) + v13) >> 1;
  return v17;
}
