int __fastcall sub_806E07C(int a1, int a2, int a3)
{
  int v3; // r4@1
  unsigned int v4; // r0@1
  unsigned int v5; // r5@1
  unsigned int v6; // r6@1
  int v7; // r0@2
  unsigned __int8 v8; // r0@4
  int v10; // [sp+Ch] [bp-4h]@0

  v3 = a2;
  v4 = a1 << 24;
  v5 = v4 >> 24;
  v6 = v4 >> 24;
  if ( GetMonData(a2, 11, a3) )
  {
    v7 = (unsigned __int8)sub_806B528();
    if ( v7 == 1 )
    {
      sub_806E050(v5, 2u, v3);
    }
    else
    {
      v8 = battle_type_is_double(v7);
      sub_806E050(v6, v8, v3);
    }
  }
  return v10;
}
