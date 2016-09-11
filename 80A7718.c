int __fastcall DisplayCannotUseItemMessage(unsigned __int8 a1, int a2, int a3, unsigned __int16 a4)
{
  unsigned __int8 v4; // r5@1
  int v5; // r7@1
  int v6; // r8@1
  unsigned __int16 v7; // r6@1
  int v8; // r0@1
  int v10; // [sp+14h] [bp-4h]@0

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = sub_80A7924();
  if ( v8 )
  {
    if ( v8 == 2 )
    {
      v2038544 = 1;
      v2038545 = v4;
      v2038548 = v5;
      v203854C = v6;
      v2038546 = v7;
    }
  }
  else
  {
    DisplayItemMessageOnField(v4, v5, v6, v7);
  }
  return v10;
}
