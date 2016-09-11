int __fastcall sub_806E2C0(unsigned __int8 a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r7@1
  int v5; // r2@1
  int v6; // r4@3
  int v7; // r0@3
  int v8; // r6@4
  int v10; // [sp+10h] [bp-4h]@0

  v3 = a2;
  v4 = a1;
  if ( GetMonData(a2, 11, a3) && !GetMonData(v3, 45, v5) )
  {
    v6 = (unsigned __int8)sub_80A1CD8(v3);
    v7 = (unsigned __int8)sub_806B528();
    if ( v7 == 1 )
      v8 = 2;
    else
      v8 = battle_type_is_double(v7) & 0xFF;
    if ( v6 && v6 != 6 )
      sub_806E104(v4, v8, (v6 - 1) & 0xFF);
    else
      sub_806E294(v4, v8, v3);
    sub_806E3C0(v4, v8, v3);
  }
  return v10;
}
