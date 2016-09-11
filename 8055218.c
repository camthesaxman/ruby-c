int __fastcall sub_8055218(_WORD *a1, int a2)
{
  int v2; // r8@1
  int v3; // r6@1
  _WORD *v4; // r7@1
  int v5; // r5@2
  int v7; // [sp+0h] [bp-30h]@2
  __int16 v8; // [sp+10h] [bp-20h]@2
  int v9; // [sp+2Ch] [bp-4h]@5

  v2 = a2;
  v3 = 0;
  v4 = a1;
  do
  {
    v5 = *v4;
    v8 = 0;
    sub_80555B0(v3, v2, &v7);
    sub_8054FF8(v3, v5, (int)&v7, &v8);
    if ( (unsigned __int8)byte_3000580[v3] == 128 )
      v8 = sub_805530C(v5);
    sub_8055BFC((unsigned __int8)v3, (unsigned __int8)v8);
    ++v4;
    ++v3;
  }
  while ( v3 <= 3 );
  return v9;
}
