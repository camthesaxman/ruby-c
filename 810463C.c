int __fastcall sub_810463C(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  __int16 v3; // r0@2
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = v2000014 % 20 & 0xFFFF;
  if ( v2000014 % 20 << 16 )
  {
    v3 = sub_8102D5C(*(_WORD *)(a1 + 16) << 16 >> 24);
_08104688:
    LOWORD(v2) = v3;
    *(_WORD *)(v1 + 16) = *(_BYTE *)(v1 + 16) + 64;
    goto _08104692;
  }
  if ( (unsigned __int8)sub_8102C48(1) != v2000005 )
  {
    sub_8102D28(*(_WORD *)(v1 + 16) << 16 >> 24);
    v3 = v2000014 % 20;
    goto _08104688;
  }
_08104692:
  if ( !(_WORD)v2 && (unsigned __int8)sub_8102C48(1) == v2000005 )
  {
    *(_WORD *)(v1 + 16) = 0;
    ++*(_WORD *)(v1 + 8);
  }
  return v5;
}
