//
// Copyright 2016 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
#include "pxr/usd/usdShade/tokens.h"

PXR_NAMESPACE_OPEN_SCOPE

UsdShadeTokensType::UsdShadeTokensType() :
    allPurpose("", TfToken::Immortal),
    bindMaterialAs("bindMaterialAs", TfToken::Immortal),
    connectedSourceFor("connectedSourceFor:", TfToken::Immortal),
    derivesFrom("derivesFrom", TfToken::Immortal),
    displacement("displacement", TfToken::Immortal),
    fallbackStrength("fallbackStrength", TfToken::Immortal),
    full("full", TfToken::Immortal),
    infoId("info:id", TfToken::Immortal),
    inputs("inputs:", TfToken::Immortal),
    interface_("interface:", TfToken::Immortal),
    interfaceOnly("interfaceOnly", TfToken::Immortal),
    interfaceRecipientsOf("interfaceRecipientsOf:", TfToken::Immortal),
    lookBinding("look:binding", TfToken::Immortal),
    materialBind("materialBind", TfToken::Immortal),
    materialBinding("material:binding", TfToken::Immortal),
    materialBindingCollection("material:binding:collection", TfToken::Immortal),
    materialVariant("materialVariant", TfToken::Immortal),
    outputs("outputs:", TfToken::Immortal),
    preview("preview", TfToken::Immortal),
    strongerThanDescendants("strongerThanDescendants", TfToken::Immortal),
    surface("surface", TfToken::Immortal),
    weakerThanDescendants("weakerThanDescendants", TfToken::Immortal),
    allTokens({
        allPurpose,
        bindMaterialAs,
        connectedSourceFor,
        derivesFrom,
        displacement,
        fallbackStrength,
        full,
        infoId,
        inputs,
        interface_,
        interfaceOnly,
        interfaceRecipientsOf,
        lookBinding,
        materialBind,
        materialBinding,
        materialBindingCollection,
        materialVariant,
        outputs,
        preview,
        strongerThanDescendants,
        surface,
        weakerThanDescendants
    })
{
}

TfStaticData<UsdShadeTokensType> UsdShadeTokens;

PXR_NAMESPACE_CLOSE_SCOPE
