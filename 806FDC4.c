int __fastcall ExecuteTableBasedItemEffect__(unsigned __int8 a1, unsigned __int16 a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // r3@1
  unsigned __int16 v4; // r5@1
  unsigned __int8 v5; // r6@1
  unsigned int *v6; // r0@2
  unsigned __int8 v7; // r2@2
  unsigned int *v8; // r4@3

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( byte_3001BAD & 2 )
  {
    v8 = &dword_3004360[25 * a1];
    v7 = sub_8094C20(a1);
    v6 = v8;
    a2 = v4;
  }
  else
  {
    v6 = &dword_3004360[25 * a1];
    v7 = v3;
  }
  return (unsigned __int8)ExecuteTableBasedItemEffect_((int)v6, a2, v7, v5);
}
