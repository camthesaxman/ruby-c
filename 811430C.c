int __fastcall sub_811430C(int a1, int a2)
{
  int v2; // r4@1
  char v3; // r3@1
  int v4; // r0@1
  int v6; // [sp+1Ch] [bp-4h]@0

  v2 = a1 + 32 * a2;
  v3 = *(_BYTE *)(v2 + 33646788) + (*(_BYTE *)(v2 + 33648836) - *(_BYTE *)(v2 + 33646788)) / 2;
  *(_BYTE *)(v2 + 33652932) = v3;
  *(_BYTE *)(v2 + 33650884) = v3;
  *(_BYTE *)(v2 + 33638596) = 5;
  *(_BYTE *)(v2 + 33640644) = 7;
  ++*(_BYTE *)(a2 + 33638532);
  v4 = 2 * a1 + (a2 << 6);
  *(_WORD *)(v4 + 33671364) = 16 * (*(_BYTE *)(v2 + 33650884) - *(_BYTE *)(v2 + 33646788));
  *(_WORD *)(v4 + 33675460) = 16 * (*(_BYTE *)(v2 + 33648836) - *(_BYTE *)(v2 + 33652932));
  return v6;
}
