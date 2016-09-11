int __fastcall sub_806E4E8(int a1, int a2, int a3)
{
  int v3; // r4@1
  unsigned int v4; // r0@1
  unsigned int v5; // r5@1
  unsigned int v6; // r6@1
  int v7; // r2@1
  int v8; // r0@3
  unsigned __int8 v9; // r0@5
  int v11; // [sp+Ch] [bp-4h]@0

  v3 = a2;
  v4 = a1 << 24;
  v5 = v4 >> 24;
  v6 = v4 >> 24;
  if ( GetMonData(a2, 11, a3) && !GetMonData(v3, 45, v7) )
  {
    v8 = (unsigned __int8)sub_806B528();
    if ( v8 == 1 )
    {
      sub_806E4A4(v5, 2u, v3);
    }
    else
    {
      v9 = battle_type_is_double(v8);
      sub_806E4A4(v6, v9, v3);
    }
  }
  return v11;
}
