int __fastcall sub_806D90C(unsigned __int8 a1, int a2, int a3)
{
  int v3; // r4@1
  unsigned __int8 v4; // r6@1
  unsigned __int8 v5; // r8@1
  unsigned int v6; // r1@1
  unsigned int v7; // r5@1
  unsigned int v8; // r7@1
  int v9; // r0@2
  unsigned __int8 v10; // r0@4
  int v12; // [sp+14h] [bp-4h]@0

  v3 = a3;
  v4 = a1;
  v5 = a1;
  v6 = a2 << 24;
  v7 = v6 >> 24;
  v8 = v6 >> 24;
  if ( GetMonData(a3, 11, a3) )
  {
    v9 = (unsigned __int8)sub_806B528();
    if ( v9 == 1 )
    {
      sub_806D880(v4, v7, 2u, v3);
    }
    else
    {
      v10 = battle_type_is_double(v9);
      sub_806D880(v5, v8, v10, v3);
    }
  }
  return v12;
}
